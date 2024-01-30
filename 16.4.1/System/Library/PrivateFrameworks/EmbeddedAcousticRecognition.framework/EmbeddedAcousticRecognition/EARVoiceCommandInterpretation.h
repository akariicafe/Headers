@class NSString, NSSet, NSIndexSet, NSArray;

@interface EARVoiceCommandInterpretation : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *commandIdentifier;
@property (readonly, copy, nonatomic) NSSet *suiteIdentifiers;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, copy, nonatomic) NSIndexSet *verbIndexes;
@property (readonly, copy, nonatomic) NSArray *arguments;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithCommandIdentifier:(id)a0 suiteIdentifiers:(id)a1 verbIndexes:(id)a2 arguments:(id)a3;

@end
