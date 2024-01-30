@class NSString, NSDictionary;

@interface SWMessage : NSObject <SWMessage>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *body;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
