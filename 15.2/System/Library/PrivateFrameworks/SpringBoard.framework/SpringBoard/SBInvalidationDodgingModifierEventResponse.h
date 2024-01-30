@class NSString;

@interface SBInvalidationDodgingModifierEventResponse : SBDodgingModifierEventResponse

@property (readonly, nonatomic) unsigned long long options;
@property (nonatomic) BOOL disableCoalescing;
@property (retain, nonatomic) NSString *completionIdentifier;
@property (retain, nonatomic) NSString *identifier;

+ (id)responseWithOptions:(unsigned long long)a0;

- (id)initWithOptions:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;

@end
