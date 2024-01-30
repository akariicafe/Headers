@interface XPCInterface : NSObject

+ (id)CTCSExpectedXPCInterfaceClassesForAllActiveDataSetRecords;
+ (void)CTCSSetExpectedClassesForXPCBrokerInterface:(id)a0;
+ (id)CTCSGetExpectedClassesForOptionsOverXPCInterface;
+ (id)CTCSCreateXPCTransportInterface;

@end
