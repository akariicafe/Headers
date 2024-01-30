@class NSString;

@interface CalExchangeCalendarExternalRepresentation : NSObject <CalExchangeSerializable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logHandle;
+ (id)externalRepresentationDataWithDictionary:(id)a0;
+ (id)dictionaryWithExternalRepresentationData:(id)a0;


@end
