@class NSString;

@interface AAContactsManager : NSObject <AACNContactsManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_predicateForHandle:(id)a0;
- (id)contactForHandle:(id)a0;
- (id)contactIDForHandle:(id)a0;

@end
