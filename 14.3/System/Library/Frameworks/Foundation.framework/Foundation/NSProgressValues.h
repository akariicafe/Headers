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

+ (id)_importantKeys;
+ (id)decodableClasses;

- (void)setTotalUnitCount:(long long)a0;
- (void)setFractionCompleted:(double)a0;
- (id)init;
- (void)setFinished:(BOOL)a0;
- (void)setCompletedUnitCount:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)completedUnitCount;
- (void)dealloc;
- (BOOL)isIndeterminate;
- (double)fractionCompleted;
- (BOOL)isFinished;
- (id)initWithCoder:(id)a0;
- (long long)totalUnitCount;
- (id)description;
- (void)setIndeterminate:(BOOL)a0;
- (struct _NSProgressFraction { long long x0; long long x1; BOOL x2; })overallFraction;
- (void)encodeWithCoder:(id)a0;
- (id)_indentedDescription:(unsigned long long)a0;

@end
