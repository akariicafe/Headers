@class NSString;

@interface TSSSpec : TSKSosBase

@property (readonly) NSString *operationPropertyName;

- (id)apply:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)canApplyOnObject:(id)a0;
- (id)getUnsetSpec;
- (id)initUnsetSpec;
- (id)initWithCurrentProperty:(id)a0;
- (BOOL)isUnsetSpec;
- (id)specWithCurrentProperty:(id)a0;

@end
