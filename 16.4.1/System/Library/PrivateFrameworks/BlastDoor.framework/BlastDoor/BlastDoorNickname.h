@class NSString, BlastDoorAvatarImage;

@interface BlastDoorNickname : NSObject {
    void /* unknown type, empty encoding */ nickname;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) BlastDoorAvatarImage *avatar;

- (id)init;
- (void).cxx_destruct;

@end
