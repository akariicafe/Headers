@interface STShowActivityRequest : AFSiriRequest {
    long long _dataType;
    long long _view;
}

+ (BOOL)supportsSecureCoding;

- (long long)view;
- (id)initWithCoder:(id)a0;
- (long long)dataType;
- (id)createResponse;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithDataType:(long long)a0 view:(long long)a1;

@end
