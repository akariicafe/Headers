@class NSError, NSDictionary, NSString;

@interface CATSharingCloseMessage : NSObject <CATSharingContentMessage>

@property (readonly, nonatomic) NSError *closeError;
@property (readonly, nonatomic) long long messageType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithDictionary:(id)a0;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;

@end
