@class NSString;

@interface _CRKConcreteArrayDifferenceConfiguration : NSObject <CRKArrayDifferenceConfiguration>

@property (copy, nonatomic) id /* block */ incomingItemsIdentifierFunction;
@property (copy, nonatomic) id /* block */ publishedItemsIdentifierFunction;
@property (copy, nonatomic) id /* block */ publishedItemsComparator;
@property (copy, nonatomic) id /* block */ liftingFunction;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
