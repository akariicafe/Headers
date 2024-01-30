@class NSString;

@interface CNUIMeContactComparisonStrategyIdentifier : NSObject <CNMeContactComparisonStrategy>

@property (retain, nonatomic) NSString *meContactIdentifierFound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
