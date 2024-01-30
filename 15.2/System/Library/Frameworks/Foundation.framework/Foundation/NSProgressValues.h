@class NSString, NSMutableDictionary;

@interface NSProgressValues : NSObject <NSSecureCoding> {
    NSMutableDictionary *_userInfo;
    struct _NSProgressFraction { long long completed; long long total; BOOL overflowed; } _selfFraction;
    struct _NSProgressFraction { long long completed; long long total; BOOL overflowed; } _childFraction;
    double _remoteFractionCompleted;
    NSString *_localizedDescription;
    NSString *_localizedAdditionalDescription;
    BOOL _isCancellable;
    BOOL _isPausable;
    BOOL _isCancelled;
    BOOL _isPaused;
    BOOL _usingChildUserInfo;
    NSString *_kind;
    BOOL _isPrioritizable;
    long long _portionOfParent;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)decodableClasses;
+ (id)_importantKeys;

- (void)setFinished:(BOOL)a0;
- (void)setFractionCompleted:(double)a0;
- (BOOL)isFinished;
- (long long)completedUnitCount;
- (void)setIndeterminate:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setTotalUnitCount:(long long)a0;
- (id)description;
- (id)init;
- (struct _NSProgressFraction { long long x0; long long x1; BOOL x2; })overallFraction;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)fractionCompleted;
- (void)setCompletedUnitCount:(long long)a0;
- (void)dealloc;
- (long long)totalUnitCount;
- (BOOL)isIndeterminate;
- (id)_indentedDescription:(unsigned long long)a0;

@end
