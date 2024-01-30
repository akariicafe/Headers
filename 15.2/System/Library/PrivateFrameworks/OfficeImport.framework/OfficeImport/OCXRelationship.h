@class NSString;

@interface OCXRelationship : NSObject {
    BOOL mExternal;
}

@property (readonly, nonatomic) NSString *idString;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *target;

- (void).cxx_destruct;
- (id)initWithId:(unsigned long long)a0 type:(id)a1 target:(id)a2 external:(BOOL)a3;
- (void)writeToStreamWriter:(id)a0;

@end
