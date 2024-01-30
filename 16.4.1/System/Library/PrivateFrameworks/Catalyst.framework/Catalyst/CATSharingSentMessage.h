@class NSData, NSDictionary, NSString;

@interface CATSharingSentMessage : NSObject <CATSharingContentMessage>

@property (readonly, copy, nonatomic) NSData *content;
@property (readonly, nonatomic) long long messageType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithContent:(id)a0;

@end
