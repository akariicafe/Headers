@class NSString, NSURL;

@interface NFCVASCommandConfiguration : NSObject <NSCopying>

@property (nonatomic) long long mode;
@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSURL *url;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithVASMode:(long long)a0 passTypeIdentifier:(id)a1 url:(id)a2;

@end
