@class NSUUID, NSString, APContentDepiction, NSArray, NSDictionary;

@interface APContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSUUID *identifier;
@property struct { double width; double height; } maxSize;
@property (retain) NSString *requestedAdIdentifier;
@property (retain) APContentDepiction *current;
@property (retain) NSArray *adjacent;
@property (retain) NSDictionary *supplementalContext;
@property (readonly) NSString *fingerprint;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 maxSize:(struct { double x0; double x1; })a1 requestedAdIdentifier:(id)a2 currentContent:(id)a3 adjacentContent:(id)a4 supplementalContext:(id)a5;

@end
