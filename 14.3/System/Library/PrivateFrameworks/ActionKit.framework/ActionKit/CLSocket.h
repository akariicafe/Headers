@class NSString, NSURL, NSDictionary;

@interface CLSocket : NSObject

@property (copy, nonatomic) NSString *APIKey;
@property (nonatomic) long long appID;
@property (retain, nonatomic) NSURL *authURL;
@property (retain, nonatomic) NSDictionary *channels;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
