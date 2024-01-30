@class NSString;

@interface SSRestrictionCondition : SSProtocolCondition {
    NSString *_restrictionName;
}

- (BOOL)evaluateWithContext:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;

@end
