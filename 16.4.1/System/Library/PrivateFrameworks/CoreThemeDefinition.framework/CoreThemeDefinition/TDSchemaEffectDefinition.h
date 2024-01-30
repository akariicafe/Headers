@interface TDSchemaEffectDefinition : TDSchemaDefinition

+ (unsigned long long)elementDefinitionCountWithSchema:(id)a0;
+ (const struct { char *x0; char *x1; BOOL x2; long long x3; struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } x4[8]; } *)elementDefinitionWithName:(id)a0 withSchema:(id)a1;
+ (const struct { char *x0; char *x1; BOOL x2; long long x3; struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } x4[8]; } *)sortedElementDefinitionAtIndex:(unsigned long long)a0 withSchema:(id)a1;

@end
