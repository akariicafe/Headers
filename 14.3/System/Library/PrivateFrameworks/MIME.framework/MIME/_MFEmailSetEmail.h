@class NSString;

@interface _MFEmailSetEmail : NSObject {
    unsigned long long _hash;
    NSString *_encodedAddress;
    NSString *_comment;
}

@property (readonly, nonatomic) unsigned long long hash;
@property (retain, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *commentedAddress;

- (id)initWithAddress:(id)a0;
- (void)dealloc;
- (id)description;
- (BOOL)isEqualToEmail:(id)a0;

@end
