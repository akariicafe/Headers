@class VOSGesture, _VOSProfileCommand;

@interface _VOSProfileGesture : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VOSGesture *gesture;
@property (weak, nonatomic) _VOSProfileCommand *command;

+ (id)profileGestureWithGesture:(id)a0;
+ (id)profileGestureWithStringValue:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithGesture:(id)a0;

@end
