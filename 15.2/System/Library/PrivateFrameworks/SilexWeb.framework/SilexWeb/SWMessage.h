@class NSString, NSDictionary;

@interface SWMessage : NSObject <SWMessage>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *body;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
