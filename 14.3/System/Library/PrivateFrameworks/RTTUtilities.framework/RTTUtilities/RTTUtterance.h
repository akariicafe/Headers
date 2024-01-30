@class NSString, NSDate;

@interface RTTUtterance : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *contactPath;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSDate *lastChangeDate;
@property (nonatomic) BOOL isMe;
@property (nonatomic) BOOL ignoreTimeoutTemporarily;

+ (BOOL)contactPathIsMe:(id)a0;
+ (id)utteranceWithContactPath:(id)a0 andText:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isComplete;
- (BOOL)hasTimedOut;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateText:(id)a0;
- (void)resetTimeout;

@end
