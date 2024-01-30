@class NSString, _GEOConfigDB;

@interface _GEOConfigDBUpdateOperation : _GEOConfigDBOperationBase <_GEOConfigDBOperation> {
    _GEOConfigDB *_configDB;
    long long _rowId;
    NSString *_type;
    NSString *_value;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)performOperation;
- (id)init:(id)a0 rowId:(long long)a1 type:(id)a2 value:(id)a3;
- (void).cxx_destruct;

@end
