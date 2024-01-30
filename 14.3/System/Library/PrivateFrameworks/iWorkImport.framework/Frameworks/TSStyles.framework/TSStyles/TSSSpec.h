@class NSString;

@interface TSSSpec : TSKSosBase

@property (readonly) NSString *operationPropertyName;

- (id)apply:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)canApplyOnObject:(id)a0;
- (id)specWithCurrentProperty:(id)a0;
- (id)getUnsetSpec;
- (BOOL)isUnsetSpec;
- (id)initWithCurrentProperty:(id)a0;
- (id)initUnsetSpec;

@end
