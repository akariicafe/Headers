@interface _CUIiPhoneOSThemeSchema : CUIThemeSchema

- (long long)schemaVersion;
- (const struct { char *x0; char *x1; BOOL x2; long long x3; struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } x4[8]; } *)sortedElementDefinitionAtIndex:(unsigned long long)a0;
- (const struct { char *x0; char *x1; BOOL x2; long long x3; struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } x4[8]; } *)_sortedEffectDefinitions;
- (const struct { char *x0; char *x1; BOOL x2; long long x3; struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } x4[8]; } *)_sortedElementDefinitions;
- (const struct { long long x0; char *x1; char *x2; } *)categoryForElementDefinition:(const struct { char *x0; char *x1; BOOL x2; long long x3; struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } x4[8]; } *)a0;
- (const struct { char *x0; char *x1; BOOL x2; long long x3; struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } x4[8]; } *)effectDefinitionAtIndex:(unsigned long long)a0;
- (unsigned long long)effectDefinitionCount;
- (const struct { char *x0; char *x1; BOOL x2; long long x3; struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } x4[8]; } *)effectDefinitionWithName:(id)a0;
- (const struct { long long x0; char *x1; char *x2; } *)elementCategoryAtIndex:(unsigned long long)a0;
- (unsigned long long)elementCategoryCount;
- (const struct { char *x0; char *x1; BOOL x2; long long x3; struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } x4[8]; } *)elementDefinitionAtIndex:(unsigned long long)a0;
- (unsigned long long)elementDefinitionCount;
- (const struct { char *x0; char *x1; BOOL x2; long long x3; struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } x4[8]; } *)elementDefinitionWithName:(id)a0;
- (unsigned long long)materialDefinitionCount;
- (id)schemaEffectRenditionsForPartDefinition:(const struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } *)a0;
- (id)schemaRenditionsForPartDefinition:(const struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } *)a0;
- (const struct { char *x0; char *x1; BOOL x2; long long x3; struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } x4[8]; } *)sortedEffectDefinitionAtIndex:(unsigned long long)a0;
- (id)widgetNameForPartDefinition:(const struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } *)a0;

@end
