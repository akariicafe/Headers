@class NSError, PHCloudIdentifier;

@interface PHCloudIdentifierMapping : NSObject

@property (readonly, nonatomic) PHCloudIdentifier *cloudIdentifier;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithCloudIdentifier:(id)a0 error:(id)a1;

@end
