@class NSString;

@interface BCSQueryOperationFactory : NSObject <BCSQueryOperationFactoryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)makeQueryOperation;

@end
