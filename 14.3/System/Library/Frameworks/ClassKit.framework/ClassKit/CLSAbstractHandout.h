@class NSString, NSDate;

@interface CLSAbstractHandout : CLSObject {
    NSString *_title;
    NSString *_instructions;
    NSDate *_dueDate;
    NSDate *_dateOfPublication;
}

@property (retain, nonatomic) NSDate *dateOfPublication;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *instructions;
@property (retain, nonatomic) NSDate *dueDate;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)mergeWithObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
