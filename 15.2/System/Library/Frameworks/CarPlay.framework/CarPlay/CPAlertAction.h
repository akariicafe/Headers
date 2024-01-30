@class NSUUID, NSString;

@interface CPAlertAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(unsigned long long)a1 handler:(id /* block */)a2;
- (id)initWithCoder:(id)a0;

@end
