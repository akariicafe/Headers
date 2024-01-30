@class NSString;

@interface SBInvalidationDodgingModifierEventResponse : SBDodgingModifierEventResponse

@property (readonly, nonatomic) unsigned long long options;
@property (nonatomic) BOOL disableCoalescing;
@property (retain, nonatomic) NSString *completionIdentifier;
@property (retain, nonatomic) NSString *identifier;

+ (id)responseWithOptions:(unsigned long long)a0;

- (unsigned long long)type;
- (id)description;
- (id)initWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;

@end
