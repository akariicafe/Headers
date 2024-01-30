@class NSString;

@interface IPPerson : NSObject

@property (readonly) NSString *fullName;
@property (readonly) NSString *handle;
@property (readonly) NSString *handleType;
@property (readonly) NSString *email;
@property (retain) NSString *ABUUID;
@property (readonly, copy) NSString *displayableName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithHandle:(id)a0 handleType:(id)a1 fullName:(id)a2;
- (id)email;
- (id)initWithEmail:(id)a0 fullName:(id)a1;

@end
