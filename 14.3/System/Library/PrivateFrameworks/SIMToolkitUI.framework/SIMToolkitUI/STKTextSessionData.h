@class NSString;

@interface STKTextSessionData : NSObject <BSXPCCoding>

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *simLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithText:(id)a0 simLabel:(id)a1;

@end
