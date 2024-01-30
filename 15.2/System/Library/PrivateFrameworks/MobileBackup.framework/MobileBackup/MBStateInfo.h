@class NSError, NSMutableArray, NSDate;

@interface MBStateInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int state;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) BOOL isCloud;
@property (nonatomic) float progress;
@property (nonatomic) unsigned long long estimatedTimeRemaining;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableArray *errors;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithState:(int)a0 progress:(float)a1 estimatedTimeRemaining:(unsigned long long)a2 isCloud:(BOOL)a3 isBackground:(BOOL)a4 error:(id)a5 errors:(id)a6;
- (id)initWithState:(int)a0 progress:(float)a1 estimatedTimeRemaining:(unsigned long long)a2 error:(id)a3 errors:(id)a4;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
