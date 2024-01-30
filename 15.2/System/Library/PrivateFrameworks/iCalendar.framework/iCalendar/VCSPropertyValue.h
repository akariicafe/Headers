@class NSString, NSMutableDictionary;

@interface VCSPropertyValue : NSObject <VCSDictifiable> {
    NSMutableDictionary *_parameters;
}

@property (readonly, nonatomic) unsigned long long valueType;
@property (readonly, nonatomic) id value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithValue:(id)a0 type:(unsigned long long)a1;
- (id)valueDescription;
- (void).cxx_destruct;
- (id)dictify;
- (void)addParameter:(id)a0 withValue:(id)a1;

@end
