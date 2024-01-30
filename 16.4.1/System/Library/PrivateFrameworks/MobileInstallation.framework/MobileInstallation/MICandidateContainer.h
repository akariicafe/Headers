@class NSURL, NSString, NSDictionary;

@interface MICandidateContainer : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *rootURL;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) long long estimatedSize;
@property (readonly, nonatomic) BOOL isAppleApp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithContainerURL:(id)a0 identifier:(id)a1 metadata:(id)a2;

@end
