@class NSString, NSURL;

@interface MLModelCollectionEntry : NSObject

@property (readonly, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) NSURL *modelURL;

+ (id)entryWithModelIdentifier:(id)a0 modelURL:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToModelCollectionEntry:(id)a0;
- (id)_initWithModelIdentifier:(id)a0 modelUrl:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
