@interface CHIPTestCluster : CHIPCluster

@property (readonly) struct TestClusterCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void)test:(id /* block */)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)testAddArguments:(unsigned char)a0 arg2:(unsigned char)a1 responseHandler:(id /* block */)a2;
- (void)testNotHandled:(id /* block */)a0;
- (void)testSpecific:(id /* block */)a0;
- (void)testUnknownCommand:(id /* block */)a0;
- (void)readAttributeBooleanWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeBooleanWithValue:(BOOL)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeBitmap8WithResponseHandler:(id /* block */)a0;
- (void)writeAttributeBitmap8WithValue:(unsigned char)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeBitmap16WithResponseHandler:(id /* block */)a0;
- (void)writeAttributeBitmap16WithValue:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeBitmap32WithResponseHandler:(id /* block */)a0;
- (void)writeAttributeBitmap32WithValue:(unsigned int)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeBitmap64WithResponseHandler:(id /* block */)a0;
- (void)writeAttributeBitmap64WithValue:(unsigned long long)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeInt8uWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeInt8uWithValue:(unsigned char)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeInt16uWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeInt16uWithValue:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeInt32uWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeInt32uWithValue:(unsigned int)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeInt64uWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeInt64uWithValue:(unsigned long long)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeInt8sWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeInt8sWithValue:(char)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeInt16sWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeInt16sWithValue:(short)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeInt32sWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeInt32sWithValue:(int)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeInt64sWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeInt64sWithValue:(long long)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeEnum8WithResponseHandler:(id /* block */)a0;
- (void)writeAttributeEnum8WithValue:(unsigned char)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeEnum16WithResponseHandler:(id /* block */)a0;
- (void)writeAttributeEnum16WithValue:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeOctetStringWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeOctetStringWithValue:(id)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeListInt8uWithResponseHandler:(id /* block */)a0;
- (void)readAttributeListOctetStringWithResponseHandler:(id /* block */)a0;
- (void)readAttributeListStructOctetStringWithResponseHandler:(id /* block */)a0;
- (void)readAttributeLongOctetStringWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeLongOctetStringWithValue:(id)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeCharStringWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeCharStringWithValue:(id)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeLongCharStringWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeLongCharStringWithValue:(id)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeUnsupportedWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeUnsupportedWithValue:(BOOL)a0 responseHandler:(id /* block */)a1;

@end
