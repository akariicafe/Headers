@class NSArray, PRIncomingPosterConfiguration;
@protocol BSInvalidatable;

@interface PBFPosterConfigurationUpdateResult : NSObject {
    id<BSInvalidatable> _pathValidityExtension;
    id<BSInvalidatable> _assocPathValidityExtension;
}

@property (readonly, nonatomic) PRIncomingPosterConfiguration *incomingPosterConfiguration;
@property (readonly, nonatomic) PRIncomingPosterConfiguration *incomingAssocPosterConfiguration;
@property (readonly, nonatomic) NSArray *postersToDelete;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithIncomingPosterConfiguration:(id)a0 incomingAssocPosterConfiguration:(id)a1 postersToDelete:(id)a2;

@end
