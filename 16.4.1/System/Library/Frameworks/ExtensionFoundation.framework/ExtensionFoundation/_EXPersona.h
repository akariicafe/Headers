@class NSString;

@interface _EXPersona : NSObject

@property (readonly, nonatomic) NSString *personaUniqueString;

+ (id)currentPersona;
+ (id)defaultPersona;
+ (id)personaWithPersonaUniqueString:(id)a0;

- (id)initWithPersonaUniqueString:(id)a0;
- (void).cxx_destruct;

@end
