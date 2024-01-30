@class NSString;

@interface CNVCardActivityAlertQuotingSerializationStrategy : NSObject <CNVCardActivityAlertAbstractSerializationStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializeString:(id)a0;
+ (id)regex;
+ (BOOL)strategyWouldAlterString:(id)a0;


@end
