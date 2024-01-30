@class NSString;

@interface AASessionGroup : NSObject {
    void /* unknown type, empty encoding */ groupName;
}

@property (class, nonatomic, readonly) AASessionGroup *default;

@property (nonatomic, copy) NSString *groupName;

- (void).cxx_destruct;
- (id)init;
- (id)initWithGroupName:(id)a0;

@end
