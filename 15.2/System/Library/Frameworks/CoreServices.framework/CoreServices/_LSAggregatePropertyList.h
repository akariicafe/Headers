@class NSArray;

@interface _LSAggregatePropertyList : _LSLazyPropertyList {
    NSArray *_plists;
}

+ (BOOL)supportsSecureCoding;

- (void)prewarm;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_getPropertyList:(id *)a0;
- (id)initWithLazyPropertyLists:(id)a0;

@end
