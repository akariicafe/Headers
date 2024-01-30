@class NSString;

@interface EMKEmojiSignifier : NSObject <NSCopying> {
    NSString *_string;
}

@property (readonly) NSString *string;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0;
- (id)description;

@end
