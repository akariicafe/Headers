@class NSString;

@interface SSRestrictionCondition : SSProtocolCondition {
    NSString *_restrictionName;
}

- (void)dealloc;
- (BOOL)evaluateWithContext:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
