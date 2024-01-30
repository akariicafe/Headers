@class PGGraphAddressNode, NSMutableArray;

@interface PGPeopleVisitingVisit : NSObject {
    BOOL _hasVeryCloseMoments;
}

@property (readonly) PGGraphAddressNode *addressNode;
@property (readonly) NSMutableArray *momentNodes;
@property (readonly) BOOL isValid;
@property (readonly) BOOL matchesFarVisitCriteria;
@property (readonly) BOOL matchesCloseVisitCriteria;

- (void).cxx_destruct;
- (id)description;
- (void)addMomentNode:(id)a0 isVeryClose:(BOOL)a1;
- (id)initWithAddressNode:(id)a0;

@end
