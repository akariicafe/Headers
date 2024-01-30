@class NSNumber, NSString;

@interface EDAMSystemException : FATException

@property (retain, nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSNumber *rateLimitDuration;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
