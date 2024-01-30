@class NSString;

@interface _UIGraphDescriptionBuilder : NSObject {
    NSString *_description;
}

+ (id)graphDescriptionForNodes:(id)a0 childProvider:(id /* block */)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithNodes:(id)a0 childProvider:(id /* block */)a1;
- (void)_recurseDescription:(id)a0 node:(id)a1 childProvider:(id /* block */)a2 depth:(unsigned long long)a3;

@end
