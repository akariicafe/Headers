@class NSString, BlastDoorAvatarImage;

@interface BlastDoorNickname : NSObject {
    void /* unknown type, empty encoding */ nickname;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) BlastDoorAvatarImage *avatar;

- (void).cxx_destruct;
- (id)init;

@end
