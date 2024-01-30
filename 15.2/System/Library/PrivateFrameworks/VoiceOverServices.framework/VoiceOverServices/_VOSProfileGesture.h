@class VOSGesture, _VOSProfileCommand;

@interface _VOSProfileGesture : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VOSGesture *gesture;
@property (weak, nonatomic) _VOSProfileCommand *command;

+ (id)profileGestureWithGesture:(id)a0;
+ (id)profileGestureWithStringValue:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)_initWithGesture:(id)a0;

@end
