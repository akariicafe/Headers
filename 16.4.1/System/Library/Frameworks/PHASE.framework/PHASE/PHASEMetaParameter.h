@class NSString;
@protocol MetaParameterValueProtocol;

@interface PHASEMetaParameter : NSObject

@property (nonatomic) BOOL registeredGlobally;
@property (weak) id<MetaParameterValueProtocol> delegate;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) id value;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUID:(id)a0 delegate:(id)a1;
- (void)setLocalValueOnly:(id)a0;

@end
