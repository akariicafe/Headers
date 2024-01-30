@class NSString;

@interface _TVRCMRCommandInfoWrapper : NSObject {
    void *_info;
}

@property (readonly, nonatomic) unsigned int command;
@property (readonly, copy, nonatomic) NSString *commandDescription;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

- (void)dealloc;
- (id)description;
- (id)initWithCommandInfo:(void *)a0;

@end
