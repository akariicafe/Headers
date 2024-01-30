@class NSUUID;

@interface TSPLazyReferenceInternal : TSPLazyReference

@property (retain, nonatomic) NSUUID *objectUUID;

- (void).cxx_destruct;
- (id)additionalDescription;

@end
